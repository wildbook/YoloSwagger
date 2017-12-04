#ifndef SWAGGER_TYPES_EndOfGameLcdsTeamId_HPP
#define SWAGGER_TYPES_EndOfGameLcdsTeamId_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsTeamId {
    // 
    std::string fullId;
  };

  void to_json(nlohmann::json& j, const EndOfGameLcdsTeamId& v) {
    j["fullId"] = v.fullId;
  }

  void from_json(const nlohmann::json& j, EndOfGameLcdsTeamId& v) {
    v.fullId = j.at("fullId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsTeamId_HPP
