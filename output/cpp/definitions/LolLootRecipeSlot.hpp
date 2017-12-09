#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeSlot_t {
    int32_t slotNumber;
    int32_t quantity;
    std::string tags;
    std::vector<std::string> lootIds;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeSlot_t& v) {
    j["slotNumber"] = v.slotNumber;
    j["quantity"] = v.quantity;
    j["tags"] = v.tags;
    j["lootIds"] = v.lootIds;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeSlot_t& v) {
    v.slotNumber = j.at("slotNumber").get<int32_t>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.tags = j.at("tags").get<std::string>();
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLootRecipeSlot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
