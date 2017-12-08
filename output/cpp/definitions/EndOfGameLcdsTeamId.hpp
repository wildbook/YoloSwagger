#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsTeamId_t {
    std::string fullId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsTeamId_t& v) {
    j["fullId"] = v.fullId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsTeamId_t& v) {
    v.fullId = j.at("fullId").get<std::string>();
  }
  inline std::string to_string(const EndOfGameLcdsTeamId_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
