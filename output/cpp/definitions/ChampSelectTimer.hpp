#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectTimer_t {
    std::string phase;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectTimer_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectTimer_t& v) {
    v.phase = j.at("phase").get<std::string>();
  }
  inline std::string to_string(const ChampSelectTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
