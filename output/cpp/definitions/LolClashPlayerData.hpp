#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashPlayerData_t {
    int32_t tickets;
  };

  inline void to_json(nlohmann::json& j, const LolClashPlayerData_t& v) {
    j["tickets"] = v.tickets;
  }

  inline void from_json(const nlohmann::json& j, LolClashPlayerData_t& v) {
    v.tickets = j.at("tickets").get<int32_t>();
  }
}
