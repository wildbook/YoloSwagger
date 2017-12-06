#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SeriesAlertDTO_t {
    int64_t alertTime;
    std::string description;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const SeriesAlertDTO_t& v) {
    j["alertTime"] = v.alertTime;
    j["description"] = v.description;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, SeriesAlertDTO_t& v) {
    v.alertTime = j.at("alertTime").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.title = j.at("title").get<std::string>();
  }
}
