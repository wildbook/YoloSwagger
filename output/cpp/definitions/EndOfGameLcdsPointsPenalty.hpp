#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsPointsPenalty_t {
    std::string type;
    double penalty;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPointsPenalty_t& v) {
    j["type"] = v.type;
    j["penalty"] = v.penalty;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPointsPenalty_t& v) {
    v.type = j.at("type").get<std::string>();
    v.penalty = j.at("penalty").get<double>();
  }
  inline std::string to_string(const EndOfGameLcdsPointsPenalty_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
