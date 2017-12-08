#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubName_t {
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const ClubName_t& v) {
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, ClubName_t& v) {
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const ClubName_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
