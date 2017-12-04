#ifndef SWAGGER_TYPES_LolSummonerAutoFillDto_HPP
#define SWAGGER_TYPES_LolSummonerAutoFillDto_HPP
#include <json.hpp>
#include "LolSummonerAutoFillQueueDto.hpp"
namespace leagueapi {
  // 
  struct LolSummonerAutoFillDto {
    // 
    std::vector<LolSummonerAutoFillQueueDto> autoFillQueues;
  };

  void to_json(nlohmann::json& j, const LolSummonerAutoFillDto& v) {
    j["autoFillQueues"] = v.autoFillQueues;
  }

  void from_json(const nlohmann::json& j, LolSummonerAutoFillDto& v) {
    v.autoFillQueues = j.at("autoFillQueues").get<std::vector<LolSummonerAutoFillQueueDto>>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerAutoFillDto_HPP
