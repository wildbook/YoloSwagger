#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginAccountStateType.hpp"
namespace leagueapi {
  struct LolLoginAccountStateResource_t {
    LolLoginAccountStateType_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLoginAccountStateResource_t& v) {
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLoginAccountStateResource_t& v) {
    v.state = j.at("state").get<LolLoginAccountStateType_t>();
  }
  inline std::string to_string(const LolLoginAccountStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
