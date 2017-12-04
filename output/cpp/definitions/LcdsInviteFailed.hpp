#ifndef SWAGGER_TYPES_LcdsInviteFailed_HPP
#define SWAGGER_TYPES_LcdsInviteFailed_HPP
#include <json.hpp>
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace leagueapi {
  // 
  struct LcdsInviteFailed {
    // 
    LcdsGameInviteBaseRuntimeException exception;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteFailed& v) {
    j["exception"] = v.exception;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteFailed& v) {
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsInviteFailed_HPP
