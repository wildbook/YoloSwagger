#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerDTO_t {
    int32_t tickets;
  };

  inline void to_json(nlohmann::json& j, const PlayerDTO_t& v) {
    j["tickets"] = v.tickets;
  }

  inline void from_json(const nlohmann::json& j, PlayerDTO_t& v) {
    v.tickets = j.at("tickets").get<int32_t>();
  }
  inline std::string to_string(const PlayerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
