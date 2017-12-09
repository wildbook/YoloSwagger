#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootNameRefId_t {
    std::string refId;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const LootNameRefId_t& v) {
    j["refId"] = v.refId;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, LootNameRefId_t& v) {
    v.refId = j.at("refId").get<std::string>();
    v.lootName = j.at("lootName").get<std::string>();
  }
  inline std::string to_string(const LootNameRefId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
