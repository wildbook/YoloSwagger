#ifndef SWAGGER_TYPES_MetricMetadata_HPP
#define SWAGGER_TYPES_MetricMetadata_HPP
#include <json.hpp>
#include "MetricMetadataAlert.hpp"
#include "AggregationType.hpp"
#include "MetricDataType.hpp"
#include "MetricMetadataNotify.hpp"
#include "MetricPriority.hpp"
#include "MetricType.hpp"
namespace leagueapi {
  // 
  struct MetricMetadata {
    // 
    std::vector<MetricMetadataAlert> alerts;
    // 
    std::string category;
    // 
    MetricDataType data_type;
    // 
    std::string description;
    // 
    std::string destination;
    // 
    std::string info;
    // 
    MetricMetadataNotify notify;
    // 
    uint32_t period;
    // 
    std::string pretty_name;
    // 
    MetricPriority priority;
    // 
    uint32_t sample_window_ms;
    // 
    AggregationType transientAggregation;
    // 
    MetricType type;
    // 
    std::string units;
  };

  void to_json(nlohmann::json& j, const MetricMetadata& v) {
    j["alerts"] = v.alerts;
    j["category"] = v.category;
    j["data_type"] = v.data_type;
    j["description"] = v.description;
    j["destination"] = v.destination;
    j["info"] = v.info;
    j["notify"] = v.notify;
    j["period"] = v.period;
    j["pretty_name"] = v.pretty_name;
    j["priority"] = v.priority;
    j["sample_window_ms"] = v.sample_window_ms;
    j["transientAggregation"] = v.transientAggregation;
    j["type"] = v.type;
    j["units"] = v.units;
  }

  void from_json(const nlohmann::json& j, MetricMetadata& v) {
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>;
    v.category = j.at("category").get<std::string>;
    v.data_type = j.at("data_type").get<MetricDataType>;
    v.description = j.at("description").get<std::string>;
    v.destination = j.at("destination").get<std::string>;
    v.info = j.at("info").get<std::string>;
    v.notify = j.at("notify").get<MetricMetadataNotify>;
    v.period = j.at("period").get<uint32_t>;
    v.pretty_name = j.at("pretty_name").get<std::string>;
    v.priority = j.at("priority").get<MetricPriority>;
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>;
    v.transientAggregation = j.at("transientAggregation").get<AggregationType>;
    v.type = j.at("type").get<MetricType>;
    v.units = j.at("units").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadata_HPP
