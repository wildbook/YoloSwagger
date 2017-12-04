#ifndef SWAGGER_TYPES_LolLobbyAutoFillDto_HPP
#define SWAGGER_TYPES_LolLobbyAutoFillDto_HPP
#include <json.hpp>
#include "LolLobbyAutoFillQueueDto.hpp"
namespace test {
  // 
  struct LolLobbyAutoFillDto {
'    // 
    std::vector<LolLobbyAutoFillQueueDto> autoFillQueues;
  };

  void to_json(nlohmann::json& j, const LolLobbyAutoFillDto& v) {
    j["autoFillQueues"] = v.autoFillQueues;
  }

  void from_json(const nlohmann::json& j, LolLobbyAutoFillDto& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolLobbyAutoFillQueueDto>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyAutoFillDto_HPP
