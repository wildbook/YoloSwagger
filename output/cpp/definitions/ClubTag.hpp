#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubTag_t {
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const ClubTag_t& v) {
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, ClubTag_t& v) {
    v.tag = j.at("tag").get<std::string>();
  }
}
