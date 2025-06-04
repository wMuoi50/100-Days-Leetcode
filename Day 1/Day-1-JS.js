/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

console.log("Day 1: Two Sum");
var twoSum = function(nums, target) {
    for(let num of nums){
        let complement = target - num;
        let index = nums.indexOf(complement);
        if(index !== -1 && index !== nums.indexOf(num)){
            return [nums.indexOf(num),index];
        }
    }
};
var nums =[3,2,4];

console.log("Input Array:", twoSum(nums, 6));