#ifndef SWAGGER_TYPES_LolClashKickRequest_HPP
#define SWAGGER_TYPES_LolClashKickRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashKickRequest {
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolClashKickRequest& v) {
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolClashKickRequest& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashKickRequest_HPP
