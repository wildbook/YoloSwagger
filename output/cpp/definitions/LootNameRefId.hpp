#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootNameRefId_t {
    std::string_t lootName;
    std::string_t refId;
  };

  inline void to_json(nlohmann::json& j, const LootNameRefId_t& v) {
    j["lootName"] = v.lootName;
    j["refId"] = v.refId;
  }

  inline void from_json(const nlohmann::json& j, LootNameRefId_t& v) {
    v.lootName = j.at("lootName").get<std::string_t>();
    v.refId = j.at("refId").get<std::string_t>();
  }
  inline std::string to_string(const LootNameRefId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
