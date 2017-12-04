#ifndef SWAGGER_TYPES_SeriesDTO_HPP
#define SWAGGER_TYPES_SeriesDTO_HPP
#include <json.hpp>
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace leagueapi {
  // 
  struct SeriesDTO {
    // 
    int64_t startDate;
    // 
    std::string internalName;
    // 
    int64_t endDate;
    // 
    std::string description;
    // 
    std::vector<std::string> tags;
    // 
    SeriesMediaDTO media;
    // 
    std::string parentName;
    // 
    std::vector<SeriesAlertDTO> warnings;
    // 
    std::string title;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO& v) {
    j["startDate"] = v.startDate;
    j["internalName"] = v.internalName;
    j["endDate"] = v.endDate;
    j["description"] = v.description;
    j["tags"] = v.tags;
    j["media"] = v.media;
    j["parentName"] = v.parentName;
    j["warnings"] = v.warnings;
    j["title"] = v.title;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO& v) {
    v.startDate = j.at("startDate").get<int64_t>;
    v.internalName = j.at("internalName").get<std::string>;
    v.endDate = j.at("endDate").get<int64_t>;
    v.description = j.at("description").get<std::string>;
    v.tags = j.at("tags").get<std::vector<std::string>>;
    v.media = j.at("media").get<SeriesMediaDTO>;
    v.parentName = j.at("parentName").get<std::string>;
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO>>;
    v.title = j.at("title").get<std::string>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SeriesDTO_HPP
