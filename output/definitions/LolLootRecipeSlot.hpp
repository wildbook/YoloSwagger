#ifndef SWAGGER_TYPES_LolLootRecipeSlot_HPP
#define SWAGGER_TYPES_LolLootRecipeSlot_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLootRecipeSlot {
'    // 
    std::vector<std::string> lootIds;
    // 
    int32_t quantity;
    // 
    int32_t slotNumber;
    // 
    std::string tags;
  };

  void to_json(nlohmann::json& j, const LolLootRecipeSlot& v) {
    j["lootIds"] = v.lootIds;
    j["quantity"] = v.quantity;
    j["slotNumber"] = v.slotNumber;
    j["tags"] = v.tags;
  }

  void from_json(const nlohmann::json& j, LolLootRecipeSlot& v) {
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>;
    v.quantity = j.at("quantity").get<int32_t>;
    v.slotNumber = j.at("slotNumber").get<int32_t>;
    v.tags = j.at("tags").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootRecipeSlot_HPP
