#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueryResultDTO_t {
    nlohmann::json queryToLootNames;
    int64_t lastUpdate;
  };

  inline void to_json(nlohmann::json& j, const QueryResultDTO_t& v) {
    j["queryToLootNames"] = v.queryToLootNames;
    j["lastUpdate"] = v.lastUpdate;
  }

  inline void from_json(const nlohmann::json& j, QueryResultDTO_t& v) {
    v.queryToLootNames = j.at("queryToLootNames").get<nlohmann::json>();
    v.lastUpdate = j.at("lastUpdate").get<int64_t>();
  }
  inline std::string to_string(const QueryResultDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
