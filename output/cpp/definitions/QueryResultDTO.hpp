#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueryResultDTO_t {
    int64_t_t lastUpdate;
    nlohmann::json_t queryToLootNames;
  };

  inline void to_json(nlohmann::json& j, const QueryResultDTO_t& v) {
    j["lastUpdate"] = v.lastUpdate;
    j["queryToLootNames"] = v.queryToLootNames;
  }

  inline void from_json(const nlohmann::json& j, QueryResultDTO_t& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t_t>();
    v.queryToLootNames = j.at("queryToLootNames").get<nlohmann::json_t>();
  }
  inline std::string to_string(const QueryResultDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
