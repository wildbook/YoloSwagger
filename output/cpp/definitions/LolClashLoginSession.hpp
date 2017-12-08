#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashLoginSessionState.hpp"
namespace leagueapi {
  struct LolClashLoginSession_t {
    LolClashLoginSessionState_t state;
    std::optional<uint64_t_t> summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashLoginSession_t& v) {
    j["state"] = v.state;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashLoginSession_t& v) {
    v.state = j.at("state").get<LolClashLoginSessionState_t>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t_t>();
  }
  inline std::string to_string(const LolClashLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
