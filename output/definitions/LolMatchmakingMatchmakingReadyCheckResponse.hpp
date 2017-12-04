#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResponse_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResponse_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolMatchmakingMatchmakingReadyCheckResponse {
'    // 
    Accepted = 49,
    // 
    Declined = 50,
    // 
    None = 48,
  };

  void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResponse& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckResponse::Accepted:
        j = "Accepted";
      break;
      case LolMatchmakingMatchmakingReadyCheckResponse::Declined:
        j = "Declined";
      break;
      case LolMatchmakingMatchmakingReadyCheckResponse::None:
        j = "None";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResponse& v) {
    const auto s& = j.get<std::string>();
    if(s == "Accepted"){
      v = LolMatchmakingMatchmakingReadyCheckResponse::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolMatchmakingMatchmakingReadyCheckResponse::Declined;
      return;
    }
    if(s == "None"){
      v = LolMatchmakingMatchmakingReadyCheckResponse::None;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResponse_HPP
