#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SeriesAlertDTO_t {
    std::string description;
    std::string title;
    int64_t alertTime;
  };

  inline void to_json(nlohmann::json& j, const SeriesAlertDTO_t& v) {
    j["description"] = v.description;
    j["title"] = v.title;
    j["alertTime"] = v.alertTime;
  }

  inline void from_json(const nlohmann::json& j, SeriesAlertDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.alertTime = j.at("alertTime").get<int64_t>();
  }
  inline std::string to_string(const SeriesAlertDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
