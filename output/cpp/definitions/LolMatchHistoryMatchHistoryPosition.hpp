#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPosition_t {
    int16_t y;
    int16_t x;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryPosition_t& v) {
    j["y"] = v.y;
    j["x"] = v.x;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryPosition_t& v) {
    v.y = j.at("y").get<int16_t>();
    v.x = j.at("x").get<int16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryPosition_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
