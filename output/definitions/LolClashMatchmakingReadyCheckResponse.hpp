#ifndef SWAGGER_TYPES_LolClashMatchmakingReadyCheckResponse_HPP
#define SWAGGER_TYPES_LolClashMatchmakingReadyCheckResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingReadyCheckResponse {
    // 
    Accepted = 49,
    // 
    Declined = 50,
    // 
    None = 48,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResponse& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckResponse::Accepted:
        j = "Accepted";
      break;
      case LolClashMatchmakingReadyCheckResponse::Declined:
        j = "Declined";
      break;
      case LolClashMatchmakingReadyCheckResponse::None:
        j = "None";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResponse& v) {
    const auto s& = j.get<std::string>();
    if(s == "Accepted"){
      v = LolClashMatchmakingReadyCheckResponse::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolClashMatchmakingReadyCheckResponse::Declined;
      return;
    }
    if(s == "None"){
      v = LolClashMatchmakingReadyCheckResponse::None;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingReadyCheckResponse_HPP
