#ifndef SWAGGER_TYPES_LolClashMatchmakingReadyCheckResponse_HPP
#define SWAGGER_TYPES_LolClashMatchmakingReadyCheckResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingReadyCheckResponse {
    // 
    None = 48,
    // 
    Accepted = 49,
    // 
    Declined = 50,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResponse& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckResponse::None:
        j = "None";
      break;
      case LolClashMatchmakingReadyCheckResponse::Accepted:
        j = "Accepted";
      break;
      case LolClashMatchmakingReadyCheckResponse::Declined:
        j = "Declined";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResponse& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolClashMatchmakingReadyCheckResponse::None;
      return;
    }
    if(s == "Accepted"){
      v = LolClashMatchmakingReadyCheckResponse::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolClashMatchmakingReadyCheckResponse::Declined;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingReadyCheckResponse_HPP
