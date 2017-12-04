#ifndef SWAGGER_TYPES_LolEndOfGameGameloopPlayerInfoV1_HPP
#define SWAGGER_TYPES_LolEndOfGameGameloopPlayerInfoV1_HPP
#include <json.hpp>
#include "LolEndOfGameRerollDataBagForClientV1.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameGameloopPlayerInfoV1 {
    // 
    LolEndOfGameRerollDataBagForClientV1 rerollDataBag;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameGameloopPlayerInfoV1& v) {
    j["rerollDataBag"] = v.rerollDataBag;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameGameloopPlayerInfoV1& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolEndOfGameRerollDataBagForClientV1>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameloopPlayerInfoV1_HPP
