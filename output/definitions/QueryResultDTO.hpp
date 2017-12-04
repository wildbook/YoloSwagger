#ifndef SWAGGER_TYPES_QueryResultDTO_HPP
#define SWAGGER_TYPES_QueryResultDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct QueryResultDTO {
    // 
    int64_t lastUpdate;
    // 
    nlohmann::json queryToLootNames;
  };

  void to_json(nlohmann::json& j, const QueryResultDTO& v) {
    j["lastUpdate"] = v.lastUpdate;
    j["queryToLootNames"] = v.queryToLootNames;
  }

  void from_json(const nlohmann::json& j, QueryResultDTO& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>;
    v.queryToLootNames = j.at("queryToLootNames").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_QueryResultDTO_HPP
