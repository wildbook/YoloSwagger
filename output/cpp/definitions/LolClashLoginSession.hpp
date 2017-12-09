#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashLoginSessionState.hpp"
namespace leagueapi {
  struct LolClashLoginSession_t {
    std::optional<uint64_t> summonerId;
    LolClashLoginSessionState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolClashLoginSession_t& v) {
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashLoginSession_t& v) {
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.state = j.at("state").get<LolClashLoginSessionState_t>();
  }
  inline std::string to_string(const LolClashLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
