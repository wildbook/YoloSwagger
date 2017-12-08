#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubMOTD_t {
    std::string motd;
  };

  inline void to_json(nlohmann::json& j, const ClubMOTD_t& v) {
    j["motd"] = v.motd;
  }

  inline void from_json(const nlohmann::json& j, ClubMOTD_t& v) {
    v.motd = j.at("motd").get<std::string>();
  }
  inline std::string to_string(const ClubMOTD_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
