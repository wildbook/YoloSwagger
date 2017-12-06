#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootNameRefId_t {
    std::string lootName;
    std::string refId;
  };

  inline void to_json(nlohmann::json& j, const LootNameRefId_t& v) {
    j["lootName"] = v.lootName;
    j["refId"] = v.refId;
  }

  inline void from_json(const nlohmann::json& j, LootNameRefId_t& v) {
    v.lootName = j.at("lootName").get<std::string>();
    v.refId = j.at("refId").get<std::string>();
  }
}
