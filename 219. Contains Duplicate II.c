
//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
	

struct node {
    int value;
	int locat;
    struct node *next;
};

#define HASH(x) (((unsigned)(x) * 2654435761u) ^ (((int)(x) >> 31) & 1u))

void insert(struct node **dict, int size, int value, struct node *new, int loc) {
    struct node *bucket = dict[HASH(value) % size];
    new->value = value;
	new->locat = loc;
    new->next = NULL;
    if (bucket == NULL) {
        dict[HASH(value) % size] = new;
    } else {
        struct node *p = bucket;
        while (p->next != NULL) p = p->next;
        p->next = new;
    }
}

bool exists(struct node **dict, int size, int value, int loc, int k) {
    struct node *bucket = dict[HASH(value) % size];
    struct node *p = bucket;
    while (p != NULL) {
        if (p->value == value) {
			if((loc - p->locat) <= k)
				return true;
        }
        p = p->next;
    }

    return false;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    struct node nodes[numsSize];
    struct node *dict[numsSize];
    struct node *node = nodes;
    memset(dict, 0, numsSize * sizeof(struct node *));

    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        if (exists(dict, numsSize, n, i, k)) {
            return true;
        } else {
            insert(dict, numsSize, n, node++, i);
        }
    }

    return false;
}

