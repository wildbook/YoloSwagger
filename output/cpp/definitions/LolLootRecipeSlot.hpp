#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeSlot_t {
    std::vector<std::string> lootIds;
    int32_t quantity;
    int32_t slotNumber;
    std::string tags;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeSlot_t& v) {
    j["lootIds"] = v.lootIds;
    j["quantity"] = v.quantity;
    j["slotNumber"] = v.slotNumber;
    j["tags"] = v.tags;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeSlot_t& v) {
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.slotNumber = j.at("slotNumber").get<int32_t>();
    v.tags = j.at("tags").get<std::string>();
  }
}
