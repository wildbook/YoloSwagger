#pragma once
#include <json.hpp>
#include <optional>
#include "LootItemClientDTO.hpp"
namespace leagueapi {
  struct LootItemListClientDTO_t {
    std::vector<LootItemClientDTO_t> lootItems;
    int64_t lastUpdate;
  };

  inline void to_json(nlohmann::json& j, const LootItemListClientDTO_t& v) {
    j["lootItems"] = v.lootItems;
    j["lastUpdate"] = v.lastUpdate;
  }

  inline void from_json(const nlohmann::json& j, LootItemListClientDTO_t& v) {
    v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO_t>>();
    v.lastUpdate = j.at("lastUpdate").get<int64_t>();
  }
  inline std::string to_string(const LootItemListClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
