#ifndef SWAGGER_TYPES_MatchmakingLcdsMatchMakerPayload_HPP
#define SWAGGER_TYPES_MatchmakingLcdsMatchMakerPayload_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsMatchMakerPayload {
    // 
    std::string LEAVER_BUSTER_ACCESS_TOKEN;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsMatchMakerPayload& v) {
    j["LEAVER_BUSTER_ACCESS_TOKEN"] = v.LEAVER_BUSTER_ACCESS_TOKEN;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsMatchMakerPayload& v) {
    v.LEAVER_BUSTER_ACCESS_TOKEN = j.at("LEAVER_BUSTER_ACCESS_TOKEN").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsMatchMakerPayload_HPP
