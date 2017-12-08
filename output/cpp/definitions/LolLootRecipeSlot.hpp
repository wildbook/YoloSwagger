#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeSlot_t {
    std::vector<std::string> lootIds;
    int32_t_t slotNumber;
    std::string_t tags;
    int32_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeSlot_t& v) {
    j["lootIds"] = v.lootIds;
    j["slotNumber"] = v.slotNumber;
    j["tags"] = v.tags;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeSlot_t& v) {
    v.lootIds = j.at("lootIds").get<std::vector<std::string>>();
    v.slotNumber = j.at("slotNumber").get<int32_t_t>();
    v.tags = j.at("tags").get<std::string_t>();
    v.quantity = j.at("quantity").get<int32_t_t>();
  }
  inline std::string to_string(const LolLootRecipeSlot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
