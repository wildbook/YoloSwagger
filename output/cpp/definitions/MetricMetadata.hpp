#ifndef SWAGGER_TYPES_MetricMetadata_HPP
#define SWAGGER_TYPES_MetricMetadata_HPP
#include <json.hpp>
#include "MetricDataType.hpp"
#include "MetricMetadataAlert.hpp"
#include "AggregationType.hpp"
#include "MetricPriority.hpp"
#include "MetricMetadataNotify.hpp"
#include "MetricType.hpp"
namespace leagueapi {
  // 
  struct MetricMetadata {
    // 
    std::string category;
    // 
    std::string info;
    // 
    std::vector<MetricMetadataAlert> alerts;
    // 
    std::string description;
    // 
    MetricDataType data_type;
    // 
    std::string destination;
    // 
    uint32_t sample_window_ms;
    // 
    uint32_t period;
    // 
    MetricPriority priority;
    // 
    std::string pretty_name;
    // 
    MetricMetadataNotify notify;
    // 
    std::string units;
    // 
    MetricType type;
    // 
    AggregationType transientAggregation;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata& v) {
    j["category"] = v.category;
    j["info"] = v.info;
    j["alerts"] = v.alerts;
    j["description"] = v.description;
    j["data_type"] = v.data_type;
    j["destination"] = v.destination;
    j["sample_window_ms"] = v.sample_window_ms;
    j["period"] = v.period;
    j["priority"] = v.priority;
    j["pretty_name"] = v.pretty_name;
    j["notify"] = v.notify;
    j["units"] = v.units;
    j["type"] = v.type;
    j["transientAggregation"] = v.transientAggregation;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata& v) {
    v.category = j.at("category").get<std::string>;
    v.info = j.at("info").get<std::string>;
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>;
    v.description = j.at("description").get<std::string>;
    v.data_type = j.at("data_type").get<MetricDataType>;
    v.destination = j.at("destination").get<std::string>;
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>;
    v.period = j.at("period").get<uint32_t>;
    v.priority = j.at("priority").get<MetricPriority>;
    v.pretty_name = j.at("pretty_name").get<std::string>;
    v.notify = j.at("notify").get<MetricMetadataNotify>;
    v.units = j.at("units").get<std::string>;
    v.type = j.at("type").get<MetricType>;
    v.transientAggregation = j.at("transientAggregation").get<AggregationType>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadata_HPP
