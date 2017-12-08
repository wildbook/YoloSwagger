#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameRerollDataBagForClientV1.hpp"
namespace leagueapi {
  struct LolEndOfGameGameloopPlayerInfoV1_t {
    LolEndOfGameRerollDataBagForClientV1_t rerollDataBag;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameloopPlayerInfoV1_t& v) {
    j["rerollDataBag"] = v.rerollDataBag;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameloopPlayerInfoV1_t& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolEndOfGameRerollDataBagForClientV1_t>();
  }
  inline std::string to_string(const LolEndOfGameGameloopPlayerInfoV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
