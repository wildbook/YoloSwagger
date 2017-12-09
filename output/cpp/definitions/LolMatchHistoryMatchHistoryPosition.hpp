#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPosition_t {
    int16_t x;
    int16_t y;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPosition_t& v) {
    j["x"] = v.x;
    j["y"] = v.y;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPosition_t& v) {
    v.x = j.at("x").get<int16_t>();
    v.y = j.at("y").get<int16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPosition_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
