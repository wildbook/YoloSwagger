#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPotentialTradersDTO_t {
    std::vector<std::string> potentialTraders;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPotentialTradersDTO_t& v) {
    j["potentialTraders"] = v.potentialTraders;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPotentialTradersDTO_t& v) {
    v.potentialTraders = j.at("potentialTraders").get<std::vector<std::string>>();
  }
}
