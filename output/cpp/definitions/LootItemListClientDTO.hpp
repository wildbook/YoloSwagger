#pragma once
#include <json.hpp>
#include <optional>
#include "LootItemClientDTO.hpp"
namespace leagueapi {
  struct LootItemListClientDTO_t {
    int64_t lastUpdate;
    std::vector<LootItemClientDTO_t> lootItems;
  };

  inline void to_json(nlohmann::json& j, const LootItemListClientDTO_t& v) {
    j["lastUpdate"] = v.lastUpdate;
    j["lootItems"] = v.lootItems;
  }

  inline void from_json(const nlohmann::json& j, LootItemListClientDTO_t& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>();
    v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO_t>>();
  }
  inline std::string to_string(const LootItemListClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
