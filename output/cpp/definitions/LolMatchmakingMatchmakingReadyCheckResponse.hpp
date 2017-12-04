#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResponse_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingMatchmakingReadyCheckResponse {
    // 
    None = 48,
    // 
    Accepted = 49,
    // 
    Declined = 50,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResponse& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckResponse::None:
        j = "None";
      break;
      case LolMatchmakingMatchmakingReadyCheckResponse::Accepted:
        j = "Accepted";
      break;
      case LolMatchmakingMatchmakingReadyCheckResponse::Declined:
        j = "Declined";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResponse& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolMatchmakingMatchmakingReadyCheckResponse::None;
      return;
    }
    if(s == "Accepted"){
      v = LolMatchmakingMatchmakingReadyCheckResponse::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolMatchmakingMatchmakingReadyCheckResponse::Declined;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResponse_HPP
