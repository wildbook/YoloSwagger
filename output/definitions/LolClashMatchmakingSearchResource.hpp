#ifndef SWAGGER_TYPES_LolClashMatchmakingSearchResource_HPP
#define SWAGGER_TYPES_LolClashMatchmakingSearchResource_HPP
#include <json.hpp>
#include "LolClashMatchmakingDodgeData.hpp"
namespace leagueapi {
  // 
  struct LolClashMatchmakingSearchResource {
    // 
    LolClashMatchmakingDodgeData dodgeData;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingSearchResource& v) {
    j["dodgeData"] = v.dodgeData;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingSearchResource& v) {
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingSearchResource_HPP
