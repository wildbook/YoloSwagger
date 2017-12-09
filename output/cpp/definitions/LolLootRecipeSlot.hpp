#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeSlot_t {
    int32_t quantity;
    std::string tags;
    std::vector<std::string> lootIds;
    int32_t slotNumber;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeSlot_t& v) {
    j["quantity"] = v.quantity;
    j["tags"] = v.tags;
    j["lootIds"] = v.lootIds;
    j["slotNumber"] = v.slotNumber;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeSlot_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.tags = j.at("tags").get<std::string>();
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>();
    v.slotNumber = j.at("slotNumber").get<int32_t>();
  }
  inline std::string to_string(const LolLootRecipeSlot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
