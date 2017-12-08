#pragma once
#include <json.hpp>
#include <optional>
#include "Position.hpp"
namespace leagueapi {
  struct LolClashSetPositionRequest_t {
    Position_t position;
  };

  inline void to_json(nlohmann::json& j, const LolClashSetPositionRequest_t& v) {
    j["position"] = v.position;
  }

  inline void from_json(const nlohmann::json& j, LolClashSetPositionRequest_t& v) {
    v.position = j.at("position").get<Position_t>();
  }
  inline std::string to_string(const LolClashSetPositionRequest_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
