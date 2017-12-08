#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SeriesMediaDTO_t {
    std::string backgroundUrl;
  };

  inline void to_json(nlohmann::json& j, const SeriesMediaDTO_t& v) {
    j["backgroundUrl"] = v.backgroundUrl;
  }

  inline void from_json(const nlohmann::json& j, SeriesMediaDTO_t& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
  }
  inline std::string to_string(const SeriesMediaDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
