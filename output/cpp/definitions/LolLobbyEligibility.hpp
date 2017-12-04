#ifndef SWAGGER_TYPES_LolLobbyEligibility_HPP
#define SWAGGER_TYPES_LolLobbyEligibility_HPP
#include <json.hpp>
#include "LolLobbyEligibilityRestriction.hpp"
namespace leagueapi {
  // 
  struct LolLobbyEligibility {
    // 
    int32_t queueId;
    // 
    std::vector<LolLobbyEligibilityRestriction> restrictions;
    // 
    bool eligible;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibility& v) {
    j["queueId"] = v.queueId;
    j["restrictions"] = v.restrictions;
    j["eligible"] = v.eligible;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibility& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.restrictions = j.at("restrictions").get<std::vector<LolLobbyEligibilityRestriction>>;
    v.eligible = j.at("eligible").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyEligibility_HPP
