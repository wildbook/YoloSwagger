#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsPointsPenalty_t {
    double penalty;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPointsPenalty_t& v) {
    j["penalty"] = v.penalty;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPointsPenalty_t& v) {
    v.penalty = j.at("penalty").get<double>();
    v.type = j.at("type").get<std::string>();
  }
}
