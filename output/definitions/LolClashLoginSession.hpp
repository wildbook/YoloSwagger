#ifndef SWAGGER_TYPES_LolClashLoginSession_HPP
#define SWAGGER_TYPES_LolClashLoginSession_HPP
#include <json.hpp>
#include "LolClashLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolClashLoginSession {
    // 
    LolClashLoginSessionState state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolClashLoginSession& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolClashLoginSession& v) {
    v.state = j.at("state").get<LolClashLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashLoginSession_HPP
