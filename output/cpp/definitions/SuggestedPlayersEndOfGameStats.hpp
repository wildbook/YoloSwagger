#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SuggestedPlayersEndOfGameStats_t {
  };

  inline void to_json(nlohmann::json& j, const SuggestedPlayersEndOfGameStats_t& v) {
  }

  inline void from_json(const nlohmann::json& j, SuggestedPlayersEndOfGameStats_t& v) {
  }
  inline std::string to_string(const SuggestedPlayersEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
